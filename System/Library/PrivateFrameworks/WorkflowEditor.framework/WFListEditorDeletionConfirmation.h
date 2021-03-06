/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFListEditorDeletionConfirmation : NSObject {

	unsigned long long _itemIndex;
	/*^block*/id _confirmationHandler;

}

@property (nonatomic,readonly) unsigned long long itemIndex;              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,readonly) id confirmationHandler;                    //@synthesize confirmationHandler=_confirmationHandler - In the implementation block
+(id)confirmationForDeletingItemAtIndex:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)confirmationHandler;
-(unsigned long long)itemIndex;
-(id)initWithItemIndex:(unsigned long long)arg1 confirmationHandler:(/*^block*/id)arg2 ;
@end

