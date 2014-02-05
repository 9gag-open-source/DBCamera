//
//  DBCameraViewDelegate.h
//  DBCamera
//
//  Created by iBo on 05/02/14.
//  Copyright (c) 2014 PSSD - Daniele Bogo. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DBCameraViewDelegate <NSObject>
@optional
- (void) cameraView:(UIView *)camera focusAtPoint:(CGPoint)point;
- (void) cameraView:(UIView *)camera exposeAtPoint:(CGPoint)point;
- (void) cameraViewStartRecording;
- (void) closeCamera;
- (void) switchCamera;
- (void) triggerFlashForMode:(AVCaptureFlashMode)flashMode;
@end