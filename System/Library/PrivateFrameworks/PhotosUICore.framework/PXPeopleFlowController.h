/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPeopleFlowController <NSObject>
@property (nonatomic,readonly) BOOL hasNextViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> nextViewController; 
@property (nonatomic,readonly) BOOL hasPreviousViewController; 
@property (nonatomic,readonly) UIViewController*<PXPeopleFlowViewController> previousViewController; 
@required
-(BOOL)hasNextViewController;
-(UIViewController*<PXPeopleFlowViewController>)nextViewController;
-(BOOL)hasPreviousViewController;
-(void)done:(id)arg1;
-(void)cancel:(id)arg1;
-(UIViewController*<PXPeopleFlowViewController>)previousViewController;

@end

