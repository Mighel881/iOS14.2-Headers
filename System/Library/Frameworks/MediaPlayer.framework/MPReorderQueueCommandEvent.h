/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent {

	NSString* _insertBeforeContextItemID;
	NSString* _insertAfterContextItemID;
	long long _destinationOffset;

}

@property (nonatomic,readonly) NSString * insertBeforeContextItemID;              //@synthesize insertBeforeContextItemID=_insertBeforeContextItemID - In the implementation block
@property (nonatomic,readonly) NSString * insertAfterContextItemID;               //@synthesize insertAfterContextItemID=_insertAfterContextItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                       //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSString *)insertBeforeContextItemID;
-(NSString *)insertAfterContextItemID;
-(long long)destinationOffset;
@end

