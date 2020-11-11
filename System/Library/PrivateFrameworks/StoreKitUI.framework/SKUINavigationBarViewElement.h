/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, UIColor;

@interface SKUINavigationBarViewElement : SKUIViewElement {

	BOOL _hidesShadow;
	BOOL _hidesBackButton;

}

@property (nonatomic,readonly) BOOL hidesShadow;                          //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,readonly) BOOL hidesBackButton;                      //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,readonly) BOOL isTransparent; 
@property (nonatomic,readonly) NSArray * mainViewElements; 
@property (nonatomic,readonly) NSArray * navigationPalettes; 
@property (nonatomic,readonly) UIColor * tintColor; 
-(BOOL)hidesShadow;
-(BOOL)isTransparent;
-(UIColor *)tintColor;
-(BOOL)hidesBackButton;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSArray *)navigationPalettes;
-(NSArray *)mainViewElements;
@end
