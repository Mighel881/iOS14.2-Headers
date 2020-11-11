/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFont, UIColor, NSString, UIImage;


@protocol TUICandidateViewStyle <NSObject>
@property (nonatomic,readonly) UIFont * candidateFont; 
@property (nonatomic,readonly) UIFont * annotationTextFont; 
@property (nonatomic,readonly) UIFont * alternativeTextFont; 
@property (nonatomic,readonly) UIFont * candidateNumberFont; 
@property (nonatomic,readonly) UIFont * sortControlFont; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,readonly) UIColor * alternativeTextColor; 
@property (nonatomic,readonly) UIColor * highlightedAlternativeTextColor; 
@property (nonatomic,readonly) UIColor * candidateNumberColor; 
@property (nonatomic,readonly) UIColor * highlightedCandidateNumberColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * cellBackgroundColor; 
@property (nonatomic,readonly) UIColor * arrowButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * transliterationCandidateBackgroundColor; 
@property (nonatomic,readonly) UIColor * groupHeaderBackgroundColor; 
@property (nonatomic,readonly) UIColor * lineColor; 
@property (nonatomic,readonly) UIColor * sortControlColor; 
@property (nonatomic,readonly) UIColor * sortControlBackgroundColor; 
@property (nonatomic,copy,readonly) NSString * arrowButtonImageName; 
@property (nonatomic,readonly) UIImage * cellSeparatorImage; 
@property (nonatomic,readonly) UIImage * slottedCellSeparatorImage; 
@property (nonatomic,readonly) UIImage * leftEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * rightEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * arrowButtonSeparatorImage; 
@property (nonatomic,readonly) UIImage * cellBackgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedCellBackgroundImage; 
@property (nonatomic,readonly) UIImage * transliterationCandidateBackgroundImage; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,readonly) double arrowButtonHeight; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) unsigned long long maskedCorners; 
@property (nonatomic,readonly) unsigned long long gridMaskedCorners; 
@property (nonatomic,readonly) double foregroundOpacity; 
@property (nonatomic,readonly) double backgroundOpacity; 
@property (nonatomic,readonly) BOOL doNotClipToBounds; 
@property (nonatomic,readonly) long long layoutOrientation; 
@property (nonatomic,readonly) unsigned long long columnsCount; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCells; 
@property (nonatomic,readonly) double minimumCellPadding; 
@property (nonatomic,readonly) double minimumCellWidth; 
@property (nonatomic,readonly) double singleSlottedCellMargin; 
@property (nonatomic,readonly) UIEdgeInsets extraCellPadding; 
@property (nonatomic,readonly) UIEdgeInsets arrowButtonPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridLinePadding; 
@property (nonatomic,readonly) CGPoint gridLineOffset; 
@property (nonatomic,readonly) UIEdgeInsets sortControlPadding; 
@property (nonatomic,readonly) long long cellTextAlignment; 
@property (nonatomic,readonly) long long alternativeTextAlignment; 
@property (nonatomic,readonly) BOOL darkBackdrop; 
@property (nonatomic,readonly) BOOL scrollDisabled; 
@property (nonatomic,readonly) BOOL allowCandidateGridExpanding; 
@property (nonatomic,readonly) BOOL showsIndex; 
@property (nonatomic,readonly) BOOL showExtraLineBeforeFirstRow; 
@property (nonatomic,readonly) BOOL fillGridWithLines; 
@property (nonatomic,readonly) BOOL dontSelectLastItemByBackwardMoving; 
@property (nonatomic,readonly) BOOL showOneMoreCandidate; 
@property (nonatomic,readonly) BOOL disableSwitchingSortingMethodByTabKey; 
@property (nonatomic,readonly) BOOL skipInlineCandidate; 
@property (nonatomic,readonly) BOOL hidesPartialCandidates; 
@property (nonatomic,readonly) long long minimumNumberOfCandidates; 
@required
-(UIColor *)gridBackgroundColor;
-(unsigned long long)maskedCorners;
-(long long)layoutOrientation;
-(UIColor *)highlightedTextColor;
-(UIColor *)lineColor;
-(double)singleSlottedCellMargin;
-(BOOL)showsIndex;
-(UIColor *)textColor;
-(UIImage *)arrowButtonSeparatorImage;
-(UIEdgeInsets)sortControlPadding;
-(UIColor *)cellBackgroundColor;
-(double)minimumCellPadding;
-(unsigned long long)columnsCount;
-(UIColor *)backgroundColor;
-(UIEdgeInsets)extraCellPadding;
-(BOOL)darkBackdrop;
-(CGPoint)gridLineOffset;
-(UIColor *)highlightedBackgroundColor;
-(BOOL)scrollDisabled;
-(UIFont *)sortControlFont;
-(unsigned long long)maxNumberOfProactiveCells;
-(UIImage *)leftEdgeSeparatorImage;
-(UIEdgeInsets)gridLinePadding;
-(UIColor *)sortControlColor;
-(double)minimumCellWidth;
-(UIColor *)alternativeTextColor;
-(UIColor *)candidateNumberColor;
-(UIFont *)annotationTextFont;
-(UIFont *)alternativeTextFont;
-(UIFont *)candidateNumberFont;
-(NSString *)arrowButtonImageName;
-(UIColor *)highlightedAlternativeTextColor;
-(UIColor *)arrowButtonBackgroundColor;
-(UIColor *)highlightedCandidateNumberColor;
-(UIColor *)highlightedRowBackgroundColor;
-(UIColor *)transliterationCandidateBackgroundColor;
-(UIImage *)cellSeparatorImage;
-(UIColor *)groupHeaderBackgroundColor;
-(UIColor *)sortControlBackgroundColor;
-(UIImage *)slottedCellSeparatorImage;
-(UIImage *)rightEdgeSeparatorImage;
-(UIImage *)cellBackgroundImage;
-(UIImage *)highlightedCellBackgroundImage;
-(UIImage *)transliterationCandidateBackgroundImage;
-(double)arrowButtonHeight;
-(unsigned long long)gridMaskedCorners;
-(double)foregroundOpacity;
-(double)backgroundOpacity;
-(BOOL)doNotClipToBounds;
-(UIEdgeInsets)arrowButtonPadding;
-(long long)cellTextAlignment;
-(long long)alternativeTextAlignment;
-(BOOL)allowCandidateGridExpanding;
-(BOOL)showExtraLineBeforeFirstRow;
-(BOOL)fillGridWithLines;
-(BOOL)dontSelectLastItemByBackwardMoving;
-(BOOL)showOneMoreCandidate;
-(BOOL)disableSwitchingSortingMethodByTabKey;
-(BOOL)skipInlineCandidate;
-(double)rowHeight;
-(BOOL)hidesPartialCandidates;
-(long long)minimumNumberOfCandidates;
-(double)cornerRadius;
-(UIEdgeInsets)gridPadding;
-(UIFont *)candidateFont;

@end
