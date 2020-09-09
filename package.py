name = 'openexr'

version = '2.4.0+ta.1.0.0'

authors = [
    'benjamin.skinner',
]

variants = [
    ['platform-windows', 'arch-x64', 'os-windows-10', 'visual_studio-2017.15.9'],
]

build_requires = [
    'zlib',
]

build_system = "cmake"

def commands():

    # Split and store version and package version
    split_versions = str(version).split('+')
    env.OPENEXR_VERSION.set(split_versions[0])
    env.OPENEXR_PACKAGE_VERSION.set(split_versions[1])

    env.OPENEXR_LIB_DIR.set( "{root}/lib" )
    env.OPENEXR_INCLUDE_DIR.set( "{root}/include" )

    env.PATH.append( "{root}/bin" )