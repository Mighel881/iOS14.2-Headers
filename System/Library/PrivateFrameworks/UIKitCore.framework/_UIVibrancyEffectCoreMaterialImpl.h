/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString;

@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {

	long long _blurStyle;
	long long _vibrancyStyle;
	NSString* _lightMaterial;
	NSString* _darkMaterial;

}
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)invertAutomaticStyle;
-(void)appendDescriptionTo:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(long long)vibrancyStyle;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2 ;
@end

