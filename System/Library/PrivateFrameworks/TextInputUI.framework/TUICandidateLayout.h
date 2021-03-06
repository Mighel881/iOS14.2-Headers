/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes, NSIndexPath;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying> {

	NSMutableArray* _candidateAttributes;
	NSMutableDictionary* _dummyCandidateAttributes;
	NSMutableArray* _lineAttributes;
	NSMutableArray* _slottedCellSeparatorAttributes;
	NSMutableArray* _groupHeaderAttributes;
	TUICandidateLayoutAttributes* _customHeaderAttributes;
	BOOL _dirty;
	BOOL _candidateNumberEnabled;
	BOOL _showExtraLineBeforeFirstRow;
	BOOL _fillGridWithLines;
	BOOL _showsIndex;
	long long _rowType;
	long long _transitionState;
	long long _layoutOrientation;
	NSIndexPath* _oldFirstVisibleIndexPath;
	double _oldFirstVisibleOffset;
	double _customHeaderHeight;
	unsigned long long _columnsCount;
	double _singleSlottedCellMargin;
	CGPoint _gridLineOffset;
	UIEdgeInsets _gridPadding;
	UIEdgeInsets _gridLinePadding;

}

@property (assign,nonatomic) long long rowType;                                   //@synthesize rowType=_rowType - In the implementation block
@property (assign,nonatomic) long long transitionState;                           //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,retain) NSIndexPath * oldFirstVisibleIndexPath;              //@synthesize oldFirstVisibleIndexPath=_oldFirstVisibleIndexPath - In the implementation block
@property (assign,nonatomic) double oldFirstVisibleOffset;                        //@synthesize oldFirstVisibleOffset=_oldFirstVisibleOffset - In the implementation block
@property (assign,nonatomic) double customHeaderHeight;                           //@synthesize customHeaderHeight=_customHeaderHeight - In the implementation block
@property (assign,nonatomic) BOOL candidateNumberEnabled;                         //@synthesize candidateNumberEnabled=_candidateNumberEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long columnsCount;                     //@synthesize columnsCount=_columnsCount - In the implementation block
@property (assign,nonatomic) double singleSlottedCellMargin;                      //@synthesize singleSlottedCellMargin=_singleSlottedCellMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridPadding;                            //@synthesize gridPadding=_gridPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridLinePadding;                        //@synthesize gridLinePadding=_gridLinePadding - In the implementation block
@property (assign,nonatomic) CGPoint gridLineOffset;                              //@synthesize gridLineOffset=_gridLineOffset - In the implementation block
@property (assign,nonatomic) BOOL showExtraLineBeforeFirstRow;                    //@synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow - In the implementation block
@property (assign,nonatomic) BOOL fillGridWithLines;                              //@synthesize fillGridWithLines=_fillGridWithLines - In the implementation block
@property (assign,nonatomic) BOOL showsIndex;                                     //@synthesize showsIndex=_showsIndex - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(long long)layoutOrientation;
-(void)setTransitionState:(long long)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)init;
-(double)singleSlottedCellMargin;
-(BOOL)showsIndex;
-(long long)transitionState;
-(long long)rowType;
-(void)setGridPadding:(UIEdgeInsets)arg1 ;
-(void)setGridLinePadding:(UIEdgeInsets)arg1 ;
-(unsigned long long)columnsCount;
-(void)setShowsIndex:(BOOL)arg1 ;
-(CGPoint)gridLineOffset;
-(void)setColumnsCount:(unsigned long long)arg1 ;
-(void)setGridLineOffset:(CGPoint)arg1 ;
-(void)setShowExtraLineBeforeFirstRow:(BOOL)arg1 ;
-(void)setCandidateNumberEnabled:(BOOL)arg1 ;
-(void)setFillGridWithLines:(BOOL)arg1 ;
-(BOOL)candidateNumberEnabled;
-(UIEdgeInsets)gridLinePadding;
-(void)setSingleSlottedCellMargin:(double)arg1 ;
-(BOOL)showExtraLineBeforeFirstRow;
-(BOOL)fillGridWithLines;
-(UIEdgeInsets)gridPadding;
-(void)clearLayoutAttributes;
-(void)setRowType:(long long)arg1 ;
-(void)prepareLayoutForSingleRow;
-(void)layoutSlottedCandidates;
-(void)prepareLayoutForMultiRow;
-(void)rotateAttributesBy90Degrees;
-(void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(BOOL)arg5 ;
-(id)keyForDummyCandidateIndexPath:(id)arg1 ;
-(NSIndexPath *)oldFirstVisibleIndexPath;
-(void)setOldFirstVisibleIndexPath:(NSIndexPath *)arg1 ;
-(double)oldFirstVisibleOffset;
-(void)setOldFirstVisibleOffset:(double)arg1 ;
-(double)customHeaderHeight;
-(void)setCustomHeaderHeight:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

