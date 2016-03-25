//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 3/24/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end


@interface CameraViewController : UIViewController
@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;


@end
