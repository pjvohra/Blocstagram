//
//  CropImageViewController.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 3/24/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import "MediaFullScreenViewController.h"
@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>

- (void) cropControllerFinishedWithImage:(UIImage *)croppedImage;

@end

@interface CropImageViewController : MediaFullScreenViewController


- (instancetype) initWithImage:(UIImage *)sourceImage;

@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;

@end
