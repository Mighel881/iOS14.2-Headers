/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXContentFilterFooterViewDelegate.h>

@class PXActionManager, PXContentFilterFooterView, PXContentFilterState, UIView, NSString;

@interface PXContentFilterFooterController : NSObject <PXContentFilterFooterViewDelegate> {

	PXActionManager* _actionManager;
	PXContentFilterFooterView* _footerFilterView;
	PXContentFilterState* _filterState;
	UIView* _view;

}

@property (nonatomic,readonly) PXContentFilterFooterView * footerFilterView; 
@property (nonatomic,copy) PXContentFilterState * filterState;                            //@synthesize filterState=_filterState - In the implementation block
@property (nonatomic,retain) UIView * view;                                               //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(PXContentFilterState *)filterState;
-(id)init;
-(UIView *)view;
-(id)initWithActionManager:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)contentFilterFooterViewDidTapShowFilter:(id)arg1 sender:(id)arg2 ;
-(PXContentFilterFooterView *)footerFilterView;
@end
