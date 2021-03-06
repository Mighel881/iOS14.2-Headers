/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement {

	long long _columnSpan;

}

@property (nonatomic,readonly) long long columnSpan;                               //@synthesize columnSpan=_columnSpan - In the implementation block
@property (nonatomic,readonly) SKUIHeaderViewElement * headerElement; 
-(long long)columnSpan;
-(SKUIHeaderViewElement *)headerElement;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
@end

