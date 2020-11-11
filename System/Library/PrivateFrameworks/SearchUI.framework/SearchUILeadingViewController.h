/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIDetailedRowComponent.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SearchUIDetailedRowModel, NSString;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent> {

	BOOL _usesCompactWidth;
	SearchUIDetailedRowModel* rowModel;
	id<SearchUIFeedbackDelegate> feedbackDelegate;
	UIView* _view;

}

@property (readonly) unsigned long long type; 
@property (nonatomic,retain) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL usesCompactWidth;                                             //@synthesize usesCompactWidth=_usesCompactWidth - In the implementation block
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)leadingViewClassForRowModel:(id)arg1 ;
+(BOOL)supportsRowModel:(id)arg1 ;
-(BOOL)usesCompactWidth;
-(id)init;
-(void)updateWithRowModel:(id)arg1 ;
-(UIView *)view;
-(void)forceVerticalCenteringOfContents;
-(id)setupView;
-(void)setView:(UIView *)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(id)imageView;
-(void)hide;
-(unsigned long long)type;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(SearchUIDetailedRowModel *)rowModel;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(BOOL)shouldVerticallyCenter;
@end
