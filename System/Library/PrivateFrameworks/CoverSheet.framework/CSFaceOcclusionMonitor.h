/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSEventHandling.h>

@class NSString;

@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling> {

	unsigned long long _faceOcclusionsSinceScreenOn;

}

@property (nonatomic,readonly) unsigned long long faceOcclusionsSinceScreenOn;              //@synthesize faceOcclusionsSinceScreenOn=_faceOcclusionsSinceScreenOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)conformsToCSEventHandling;
-(unsigned long long)faceOcclusionsSinceScreenOn;
@end

