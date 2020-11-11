/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout {

	unsigned long long _firstVisibleCellIndex;

}

@property (assign,nonatomic) unsigned long long firstVisibleCellIndex;              //@synthesize firstVisibleCellIndex=_firstVisibleCellIndex - In the implementation block
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(unsigned long long)firstVisibleCellIndex;
-(void)setFirstVisibleCellIndex:(unsigned long long)arg1 ;
@end
