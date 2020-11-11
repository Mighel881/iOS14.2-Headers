/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKDataSourceElement.h>

@class NSArray, IKHeaderElement, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKViewElement * footer; 
-(IKViewElement *)footer;
-(IKHeaderElement *)header;
-(NSArray *)items;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)unboundItemElements;
@end
