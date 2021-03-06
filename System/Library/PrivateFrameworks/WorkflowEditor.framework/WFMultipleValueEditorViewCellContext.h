/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFMultipleValueEditorViewCell;

@interface WFMultipleValueEditorViewCellContext : NSObject {

	WFMultipleValueEditorViewCell* _cell;

}

@property (assign,nonatomic,__weak) WFMultipleValueEditorViewCell * cell;                       //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider; 
@property (nonatomic,readonly) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,readonly) id<WFComponentNavigationContext> navigationContext; 
-(WFMultipleValueEditorViewCell *)cell;
-(void)setCell:(WFMultipleValueEditorViewCell *)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
@end

