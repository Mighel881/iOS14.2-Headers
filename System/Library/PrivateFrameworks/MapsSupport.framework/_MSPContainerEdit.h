/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPContainerEdit.h>

@class NSString;

@interface _MSPContainerEdit : NSObject <MSPContainerEdit>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ifAddition:(/*^block*/id)arg1 ifRemoval:(/*^block*/id)arg2 ifReplacement:(/*^block*/id)arg3 ifContentUpdate:(/*^block*/id)arg4 ifReplacedEntirely:(/*^block*/id)arg5 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
@end
