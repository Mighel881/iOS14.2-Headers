/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource {

	NSArray* _concerns;
	long long _selectedConcernIndex;
	SUTextViewCell* _textViewCell;

}

@property (nonatomic,retain) NSArray * concerns;                           //@synthesize concerns=_concerns - In the implementation block
@property (assign,nonatomic) long long selectedConcernIndex;               //@synthesize selectedConcernIndex=_selectedConcernIndex - In the implementation block
@property (nonatomic,readonly) SUTextViewCell * textViewCell;              //@synthesize textViewCell=_textViewCell - In the implementation block
-(id)init;
-(long long)numberOfSections;
-(long long)tableViewStyle;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(NSArray *)concerns;
-(void)dealloc;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(long long)selectedConcernIndex;
-(void)setSelectedConcernIndex:(long long)arg1 ;
-(SUTextViewCell *)textViewCell;
-(void)setConcerns:(NSArray *)arg1 ;
-(id)_titleCellForIndexPath:(id)arg1 ;
@end

