/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject {

	NSMutableDictionary* _scopeIdentifierToAttachedViewMap;

}
-(id)init;
-(void)dealloc;
-(void)attachComponentLayout:(CKComponentLayout*)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(CKComponentBoundsAnimation)arg3 toView:(id)arg4 ;
-(void)detachComponentLayoutWithScopeIdentifier:(int)arg1 ;
-(id)attachStateForScopeIdentifier:(int)arg1 ;
-(void)_detachComponentLayoutFromView:(id)arg1 ;
@end
