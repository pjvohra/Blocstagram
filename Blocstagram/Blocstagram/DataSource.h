//
//  DataSource.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 2/7/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject
+(instancetype) sharedInstance;
 @property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
