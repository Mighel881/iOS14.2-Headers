/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/MTMediaPlaylistItem.h>

@class NSArray, NSString;

@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <MTMediaPlaylistItem> {

	unsigned long long _overallPosition;
	NSArray* _eventData;
	unsigned long long _duration;
	NSRange _timeRange;

}

@property (assign,nonatomic) unsigned long long overallPosition;                     //@synthesize overallPosition=_overallPosition - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (assign,nonatomic) NSRange timeRange;                                      //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long startPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setTimeRange:(NSRange)arg1 ;
-(NSRange)timeRange;
-(NSString *)description;
-(void)setEventData:(NSArray *)arg1 ;
-(NSArray *)eventData;
-(unsigned long long)duration;
-(unsigned long long)overallPosition;
-(id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3 ;
-(void)setOverallPosition:(unsigned long long)arg1 ;
@end
