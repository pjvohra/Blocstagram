//
//  DataSource.h
//  Blocstagram
//
//  Created by Pankaj Vohra on 2/7/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;
typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject
+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
- (void) deleteMediaItem:(Media *)item;
- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) downloadImageForMediaItem:(Media *)mediaItem;
- (void) toggleLikeOnMediaItem:(Media *)mediaItem withCompletionHandler:(void (^)(void))completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
 + (NSString *) instagramClientID;
 @property (nonatomic, strong, readonly) NSString *accessToken;


@end
