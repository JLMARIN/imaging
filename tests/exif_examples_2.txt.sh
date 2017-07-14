# exif data elp_1 with added information

# make, model, focal length

identify -verbose 170712-133831_frame_0001.jpg | grep "exif:"
    exif:ColorSpace: 65535
    exif:ComponentsConfiguration: 1, 2, 3, 0
    exif:ExifOffset: 130
    exif:ExifVersion: 48, 50, 51, 48
    exif:FlashPixVersion: 48, 49, 48, 48
    exif:FocalLength: 6/1
    exif:Make: ELP
    exif:Model: ELP-USB500W02M
    exif:ResolutionUnit: 2
    exif:XResolution: 0/1
    exif:YCbCrPositioning: 1
    exif:YResolution: 0/1
    Profile-exif: 210 bytes


# GPS data

identify -verbose 170629-140346_frame_0342_cam_2.jpg | grep "exif:"
    exif:GPSAltitude: 24167/512
    exif:GPSAltitudeRef: 0
    exif:GPSInfo: 90
    exif:GPSLatitude: 53/1, 38/1, 867/50
    exif:GPSLatitudeRef: N
    exif:GPSLongitude: 113/1, 16/1, 14709/250
    exif:GPSLongitudeRef: W
    exif:GPSTrackRef: T
    exif:GPSVersionID: 2, 3, 0, 0
    exif:ResolutionUnit: 1
    exif:XResolution: 1/1
    exif:YCbCrPositioning: 1
    exif:YResolution: 1/1
    Profile-exif: 254 bytes
