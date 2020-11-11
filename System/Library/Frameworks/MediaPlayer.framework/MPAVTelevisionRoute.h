/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	void* _television;

}

@property (nonatomic,readonly) void* television;              //@synthesize television=_television - In the implementation block
-(long long)routeType;
-(id)routeUID;
-(void*)television;
-(long long)routeSubtype;
-(id)initWithTelevision:(void*)arg1 ;
-(id)connection;
-(void)dealloc;
@end
