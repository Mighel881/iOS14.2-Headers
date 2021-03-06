/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLRegionsClustering.h>

@interface PLRegionsDensityClustering : PLRegionsClustering {

	BOOL _includeDefiniteClusters;
	BOOL _removeDefiniteClustersObjectsFromDataset;
	BOOL _includeExtensiveClusters;
	BOOL _removeExtensiveClustersObjectsFromDataset;
	BOOL _removeExtensiveClustersContainingDefiniteClusters;
	unsigned long long _algorithm;
	double _definiteClusterTimeIntervalDistance;
	double _definiteClusterMaximumDistanceUnit;
	double _definiteClusterMinimumNumberOfObjectsPercent;
	unsigned long long _definiteClusterMinimumNumberOfObjects;
	double _extensiveClusterTimeIntervalDistance;
	double _extensiveClusterMaximumDistanceUnit;
	double _extensiveClusterMinimumNumberOfObjectsPercent;
	unsigned long long _extensiveClusterMinimumNumberOfObjects;

}

@property (assign,nonatomic) unsigned long long algorithm;                                           //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) BOOL includeDefiniteClusters;                                           //@synthesize includeDefiniteClusters=_includeDefiniteClusters - In the implementation block
@property (assign,nonatomic) double definiteClusterTimeIntervalDistance;                             //@synthesize definiteClusterTimeIntervalDistance=_definiteClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double definiteClusterMaximumDistanceUnit;                              //@synthesize definiteClusterMaximumDistanceUnit=_definiteClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;                    //@synthesize definiteClusterMinimumNumberOfObjectsPercent=_definiteClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;               //@synthesize definiteClusterMinimumNumberOfObjects=_definiteClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeDefiniteClustersObjectsFromDataset;                          //@synthesize removeDefiniteClustersObjectsFromDataset=_removeDefiniteClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL includeExtensiveClusters;                                          //@synthesize includeExtensiveClusters=_includeExtensiveClusters - In the implementation block
@property (assign,nonatomic) double extensiveClusterTimeIntervalDistance;                            //@synthesize extensiveClusterTimeIntervalDistance=_extensiveClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double extensiveClusterMaximumDistanceUnit;                             //@synthesize extensiveClusterMaximumDistanceUnit=_extensiveClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;                   //@synthesize extensiveClusterMinimumNumberOfObjectsPercent=_extensiveClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;              //@synthesize extensiveClusterMinimumNumberOfObjects=_extensiveClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersObjectsFromDataset;                         //@synthesize removeExtensiveClustersObjectsFromDataset=_removeExtensiveClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersContainingDefiniteClusters;                 //@synthesize removeExtensiveClustersContainingDefiniteClusters=_removeExtensiveClustersContainingDefiniteClusters - In the implementation block
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setDefiniteClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(BOOL)removeDefiniteClustersObjectsFromDataset;
-(double)definiteClusterTimeIntervalDistance;
-(void)setRemoveExtensiveClustersObjectsFromDataset:(BOOL)arg1 ;
-(id)init;
-(void)setExtensiveClusterTimeIntervalDistance:(double)arg1 ;
-(void)setExtensiveClusterMaximumDistanceUnit:(double)arg1 ;
-(/*^block*/id)_locationBasedClusteringBlock;
-(BOOL)includeExtensiveClusters;
-(void)setDefiniteClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)extensiveClusterTimeIntervalDistance;
-(double)extensiveClusterMinimumNumberOfObjectsPercent;
-(/*^block*/id)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1 ;
-(unsigned long long)definiteClusterMinimumNumberOfObjects;
-(void)setDefiniteClusterMaximumDistanceUnit:(double)arg1 ;
-(void)setRemoveDefiniteClustersObjectsFromDataset:(BOOL)arg1 ;
-(void)setDefiniteClusterTimeIntervalDistance:(double)arg1 ;
-(double)definiteClusterMinimumNumberOfObjectsPercent;
-(BOOL)removeExtensiveClustersContainingDefiniteClusters;
-(unsigned long long)extensiveClusterMinimumNumberOfObjects;
-(void)setIncludeExtensiveClusters:(BOOL)arg1 ;
-(void)setRemoveExtensiveClustersContainingDefiniteClusters:(BOOL)arg1 ;
-(double)definiteClusterMaximumDistanceUnit;
-(void)setExtensiveClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(double)extensiveClusterMaximumDistanceUnit;
-(void)setExtensiveClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(BOOL)includeDefiniteClusters;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)removeExtensiveClustersObjectsFromDataset;
-(unsigned long long)algorithm;
-(void)setIncludeDefiniteClusters:(BOOL)arg1 ;
@end

