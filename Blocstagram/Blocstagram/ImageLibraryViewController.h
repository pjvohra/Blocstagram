//
//  ImageLibraryViewController.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 3/24/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import "CropImageViewController.h"
@class ImageLibraryViewController;

@protocol ImageLibraryViewControllerDelegate <NSObject>

- (void) imageLibraryViewController:(ImageLibraryViewController *)imageLibraryViewController didCompleteWithImage:(UIImage *)image;

@end


@interface ImageLibraryViewController : UICollectionViewController

 @property (nonatomic, strong) PHFetchResult *result;
@property (nonatomic, weak) NSObject <ImageLibraryViewControllerDelegate> *delegate;

@end
