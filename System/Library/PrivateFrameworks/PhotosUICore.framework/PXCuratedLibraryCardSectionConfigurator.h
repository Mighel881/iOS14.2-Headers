/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator {

	PXCuratedLibraryCardSectionBodyLayoutSpec* _cardSpec;

}

@property (nonatomic,readonly) PXCuratedLibraryCardSectionBodyLayoutSpec * cardSpec;              //@synthesize cardSpec=_cardSpec - In the implementation block
-(UIEdgeInsets)containerInsets;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(PXCuratedLibraryCardSectionBodyLayoutSpec *)cardSpec;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg1 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
@end

