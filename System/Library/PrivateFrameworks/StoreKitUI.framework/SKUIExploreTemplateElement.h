/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIViewElement, SKUINavigationBarViewElement;

@interface SKUIExploreTemplateElement : SKUIViewElement {

	BOOL _usesSplits;

}

@property (nonatomic,readonly) NSArray * childViewElements; 
@property (nonatomic,readonly) SKUIViewElement * leftSplit; 
@property (nonatomic,readonly) SKUIViewElement * rightSplit; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) BOOL usesSplits;                                                  //@synthesize usesSplits=_usesSplits - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(SKUIViewElement *)leftSplit;
-(SKUIViewElement *)rightSplit;
-(BOOL)usesSplits;
-(NSArray *)childViewElements;
-(void)_getLeftSplit:(id*)arg1 rightSplit:(id*)arg2 ;
@end

