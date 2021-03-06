//
//  PvChannel.h
//  liveplayer
//
//  Created by seanwong on 10/27/15.
//  Copyright © 2015 easefun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PLVChannel : NSObject

@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *contentURL;
@property (nonatomic, copy) NSString *stream;

/**
 *  加载视频信息
 *
 *  @param uid        user id
 *  @param cid        channel id
 *  @param completion 获得频道信息的block
 */
+(void)loadVideoUrl:(NSString*)uid channelId:(NSString*)cid completion:(void(^)(PLVChannel*))completion;

+(BOOL)isALive:(PLVChannel*)channel;                                                                    // 是否正在直播

@end
