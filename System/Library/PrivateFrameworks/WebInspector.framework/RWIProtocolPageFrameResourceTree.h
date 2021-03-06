/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
+(id)safe_initWithFrame:(id)arg1 resources:(id)arg2 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(NSArray *)childFrames;
-(RWIProtocolPageFrame *)frame;
-(void)setChildFrames:(NSArray *)arg1 ;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
@end

