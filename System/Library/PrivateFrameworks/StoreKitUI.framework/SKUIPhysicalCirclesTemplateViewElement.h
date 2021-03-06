/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIPhysicalCirclesTemplateDOMFeature, SKUILabelViewElement, NSArray, SKUIPaletteViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {

	SKUIPhysicalCirclesTemplateDOMFeature* _scriptInterface;

}

@property (nonatomic,readonly) SKUILabelViewElement * subtitleElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
@property (nonatomic,readonly) NSArray * circleItemElements; 
@property (nonatomic,readonly) SKUIPaletteViewElement * footerPaletteElement; 
@property (nonatomic,readonly) SKUIPhysicalCirclesTemplateDOMFeature * scriptInterface;              //@synthesize scriptInterface=_scriptInterface - In the implementation block
+(id)supportedFeatures;
-(SKUILabelViewElement *)titleElement;
-(SKUILabelViewElement *)subtitleElement;
-(SKUIPhysicalCirclesTemplateDOMFeature *)scriptInterface;
-(NSArray *)circleItemElements;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg1 ;
-(SKUIPaletteViewElement *)footerPaletteElement;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

