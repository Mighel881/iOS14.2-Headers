/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {

	UITextFieldBackgroundView* _systemBackgroundView;

}
+(id)systemStyleMetricsProvider;
-(id)backgroundView;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(id)preferredMetricsProvider;
-(void)setProgress:(double)arg1 ;
-(void)addToTextField:(id)arg1 ;
-(long long)associatedBorderStyle;
-(Class)systemBackgroundViewClass;
-(void)removeFromTextField;
-(id)overridingSetBackgroundColor:(id)arg1 ;
-(void)_buildDescription:(id)arg1 ;
-(id)overridingGetBackgroundColor;
@end
