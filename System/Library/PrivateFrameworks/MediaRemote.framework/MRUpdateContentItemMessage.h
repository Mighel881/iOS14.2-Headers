/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(MRPlayerPath *)playerPath;
-(NSArray *)contentItems;
-(unsigned long long)type;
-(unsigned long long)priority;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
@end

