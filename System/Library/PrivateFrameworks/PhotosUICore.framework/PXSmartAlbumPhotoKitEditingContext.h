/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSmartAlbumEditingContext.h>

@class NSArray, PHPhotoLibrary, NSString;

@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * conditionTypeValues; 
@property (nonatomic,readonly) NSArray * albumValues; 
@property (nonatomic,readonly) NSArray * cameraModels; 
@property (nonatomic,readonly) NSArray * lensModels; 
@property (nonatomic,readonly) NSArray * keywordValues; 
@property (nonatomic,readonly) NSArray * personNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(NSArray *)lensModels;
-(id)apertureValuesWithFormatter:(id)arg1 ;
-(id)focalLengthValuesWithFormatter:(id)arg1 ;
-(id)ISOValuesWithFormatter:(id)arg1 ;
-(id)shutterSpeedValuesWithFormatter:(id)arg1 ;
-(NSArray *)conditionTypeValues;
-(NSArray *)albumValues;
-(NSArray *)cameraModels;
-(NSArray *)keywordValues;
-(NSArray *)personNames;
@end
