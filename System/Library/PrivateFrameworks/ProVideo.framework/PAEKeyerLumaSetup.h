/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <NSCoding> {

	NSNumber* _lumA;
	NSNumber* _lumB;
	NSNumber* _lumC;
	NSNumber* _lumD;

}
-(id)init;
-(float)lumA;
-(float)lumB;
-(float)lumC;
-(float)lumD;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(void)setLumA:(float)arg1 ;
-(void)setLumB:(float)arg1 ;
-(void)setLumC:(float)arg1 ;
-(void)setLumD:(float)arg1 ;
-(void)setLumANumber:(id)arg1 ;
-(void)setLumBNumber:(id)arg1 ;
-(void)setLumCNumber:(id)arg1 ;
-(void)setLumDNumber:(id)arg1 ;
@end

