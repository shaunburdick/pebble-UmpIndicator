
Umpire Indicator
===================

A Simple Umpire Pitch Count indicator app for Pebble Smart Watches

License
-------

The code uses the MIT license. See the ![LICENSE](LICENSE) file for details.

Making it work
--------------

You'll need to have the [pebble SDK](http://developer.getpebble.com/)
installed.

After cloning the repository, set up the SDK framework by running the following
command from the directory containing the repository:

    pebble_sdk_path=/path/to/pebble-sdk-release
    ${pebble_sdk_path}/tools/create_pebble_project.py ${pebble_sdk_path}/sdk/ \
        pebble-UmpIndicator --symlink-only

Then change into the repository and configure and build:

    cd pebble-UmpIndicator
    ./waf configure
    ./waf build

Follow instructions from the SDK documentation to install the watch face onto
your wrist.
