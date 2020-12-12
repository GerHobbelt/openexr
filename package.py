name = 'openexr'

version = '2.4.0-ta.1.1.0'

authors = [
    'benjamin.skinner',
]

variants = [
    ['platform-windows', 'arch-x64', 'os-windows-10'],
    ['platform-linux', 'arch-x86_64', 'os-centos-7'],
]

build_requires = [
    'zlib-1.2',
]

@early()
def private_build_requires():
    import sys
    if 'win' in str(sys.platform):
        return ['visual_studio']
    else:
        return ['gcc-6']

build_system = "cmake"

def commands():

    # Split and store version and package version
    split_versions = str(version).split('-')
    env.OPENEXR_VERSION.set(split_versions[0])
    env.OPENEXR_PACKAGE_VERSION.set(split_versions[1])

    env.OPENEXR_ROOT.set( "{root}" )
    env.OPENEXR_ROOT_DIR.set( "{root}" )
    env.OPENEXR_LIB_DIR.set( "{root}/lib" )
    env.OPENEXR_INCLUDE_DIR.set( "{root}/include" )

    env.PATH.append( "{root}/bin" )
