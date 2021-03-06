/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SidecarCore/SidecarItem.h>

@class NSMutableData;

@interface SidecarMutableItem : SidecarItem {

	NSMutableData* _mutableData;
	unsigned long long _capacity;
	unsigned _complete : 1;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(BOOL)isComplete;
-(id)data;
-(BOOL)appendData:(id)arg1 ;
-(id)initWithType:(id)arg1 capacity:(unsigned long long)arg2 ;
@end

