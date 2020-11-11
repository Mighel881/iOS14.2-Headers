/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>

@class NSString;

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping> {

	BOOL starting;

}

@property (assign,getter=isStarting,nonatomic) BOOL starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setStarting:(BOOL)arg1 ;
-(BOOL)isStarting;
@end
