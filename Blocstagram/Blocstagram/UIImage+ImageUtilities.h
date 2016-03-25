//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 3/24/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end
