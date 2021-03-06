/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIDetailedViewDelegate.h>

@class SearchUIDetailedView, SearchUIDetailedRowModel, NSString;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (nonatomic,retain) SearchUIDetailedView * contentView; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)setupContentView;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)footnoteButtonPressed;
-(id)leadingTextView;
-(id)leadingView;
@end

