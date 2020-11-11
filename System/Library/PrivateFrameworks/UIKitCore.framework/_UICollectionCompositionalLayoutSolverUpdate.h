/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICollectionViewUpdateTranslating;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UIDataSourceSnapshotter;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {

	NSArray* _updateItems;
	id<_UICollectionViewUpdateTranslating> _updateTranslator;
	_UIDataSourceSnapshotter* _finalDataSourceSnapshot;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) CGRect visibleBounds;                                                 //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems;                                                //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> updateTranslator;              //@synthesize updateTranslator=_updateTranslator - In the implementation block
@property (nonatomic,readonly) _UIDataSourceSnapshotter * finalDataSourceSnapshot;                   //@synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot - In the implementation block
+(id)solverUpdateForVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
-(CGRect)visibleBounds;
-(id<_UICollectionViewUpdateTranslating>)updateTranslator;
-(_UIDataSourceSnapshotter *)finalDataSourceSnapshot;
-(id)initWithVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
-(NSArray *)updateItems;
@end
