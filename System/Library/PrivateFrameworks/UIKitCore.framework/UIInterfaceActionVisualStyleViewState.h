/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIScreen, UIColor;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {

	UITraitCollection* _traitCollection;
	UIScreen* _screen;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
-(UITraitCollection *)traitCollection;
-(id)init;
-(UIScreen *)screen;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithScreen:(id)arg1 ;
-(id)copyWithTraitCollection:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(UIColor *)tintColor;
-(void)_collectStateFromView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
