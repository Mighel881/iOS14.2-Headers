/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;
#import <PlacesKit/PlacesKit-Structs.h>
@class PKExtendedTraitCollection, NSObject, NSString;

@interface PXPlacesSnapshotOptions : NSObject {

	BOOL _shouldSkipPlaceholder;
	BOOL _showsPointLabels;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _cacheDirectoryPath;
	double _visibleDistance;
	unsigned long long _snapshotMapType;
	CGSize _viewSize;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;                                //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate;              //@synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectoryPath;                                                      //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (assign,nonatomic) double visibleDistance;                                                             //@synthesize visibleDistance=_visibleDistance - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotMapType;                                                 //@synthesize snapshotMapType=_snapshotMapType - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                                    //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPlaceholder;                                                         //@synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL showsPointLabels;                                                              //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
-(void)setShouldSkipPlaceholder:(BOOL)arg1 ;
-(id)init;
-(BOOL)showsPointLabels;
-(void)setCacheDirectoryPath:(NSString *)arg1 ;
-(double)visibleDistance;
-(NSString *)cacheDirectoryPath;
-(void)setGeotaggableInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setVisibleDistance:(double)arg1 ;
-(id)description;
-(id<PXPlacesMapGeotaggableInfoDelegate>)geotaggableInformationDelegate;
-(CGSize)viewSize;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(void)setSnapshotMapType:(unsigned long long)arg1 ;
-(unsigned long long)snapshotMapType;
-(BOOL)shouldSkipPlaceholder;
-(void)setShowsPointLabels:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
@end

