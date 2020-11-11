/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, _MKURLParser, LPMapMetadata, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, MKPlaceCuratedCollectionRefiner, MKPlacePublisherRefiner;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	CLGeocoder* _geocoder;
	_MKURLParser* _parser;
	LPMapMetadata* _mapMetadata;
	LPMapCollectionMetadata* _collectionMetadata;
	LPMapCollectionPublisherMetadata* _publisherMetadata;
	MKPlaceCuratedCollectionRefiner* _curatedCollectionRefiner;
	MKPlacePublisherRefiner* _publisherRefiner;

}
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
-(void)start;
-(void)fail;
-(void)complete;
-(void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2 ;
-(void)completeWithCollection;
-(void)completeWithCuratedCollection;
-(void)completeWithPublisher;
-(void)completeWithDirections;
-(void)resolveMapRegionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeWithSearchQuery:(id)arg1 ;
-(void)completeWithMapItem:(id)arg1 ;
-(void)completeWithPlacemark:(id)arg1 ;
-(id)geocoder;
-(void)cancel;
@end
