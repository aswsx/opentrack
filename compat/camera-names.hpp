/* Copyright (c) 2014-2015, Stanislaw Halik <sthalik@misaki.pl>

 * Permission to use, copy, modify, and/or distribute this
 * software for any purpose with or without fee is hereby granted,
 * provided that the above copyright notice and this permission
 * notice appear in all copies.
 */

#pragma once

#include <QList>
#include <QString>

#include "export.hpp"

// Hard coding name of standard Kinect camera as returned from Windows API as used in ::get_camera_names
static const char KKinectVideoSensor[] = "Kinect V2 Video Sensor";
// Defining camera name for Kinect IR Sensor
static const char KKinectIRSensor[] = "Kinect V2 IR Sensor";

OTR_COMPAT_EXPORT QList<QString> get_camera_names();
OTR_COMPAT_EXPORT int camera_name_to_index(const QString &name);

