/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;
@class _MXExtensionProvider;

@interface _MXExtensionManager : NSObject {

	id<_MXExtensionLookupPolicy> _lookupPolicy;
	id _matchingContext;
	id<_MXExtensionManagerDelegate> _delegate;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,retain) id matchingContext;                                           //@synthesize matchingContext=_matchingContext - In the implementation block
@property (assign,nonatomic,__weak) id<_MXExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _MXExtensionProvider * extensionProvider;                     //@synthesize extensionProvider=_extensionProvider - In the implementation block
@property (nonatomic,readonly) id<_MXExtensionLookupPolicy> lookupPolicy;                  //@synthesize lookupPolicy=_lookupPolicy - In the implementation block
+(id)restaurantReservationIntentClassNames;
+(id)_queue;
+(id)_maps_ridesharingIntentClassesForUIInteraction;
+(id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+(id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+(id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+(id)_lookupPolicyForIntentsExtensions;
+(id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1 ;
+(id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithIdentifier:(id)arg1 ;
+(id)lookupPolicyForRestaurantReservationExtensions;
+(id)_extensionsWithLookupPolicy:(id)arg1 ;
+(id)lookupPolicyForExtensionWithCapabilities:(id)arg1 ;
+(void)imageForKey:(id)arg1 extension:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_lookupPolicyForAllExtensions;
+(id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
+(id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+(id)_lookupPolicyWithExtensionPointNames:(id)arg1 ;
+(void)_maps_updateRideBookingExtensions:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2 ;
+(id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+(id)_lookupPolicyForUIExtension;
+(id)lookupPolicyForRestaurantQueueingExtensions;
+(id)restaurantQueueingIntentClassNames;
+(id)lookupPolicyForExtensionWithCapability:(id)arg1 ;
+(id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
+(id)_lookupPolicyForNonUIExtension;
+(id)_lookupPolicyWithBlock:(/*^block*/id)arg1 ;
-(id<_MXExtensionManagerDelegate>)delegate;
-(_MXExtensionProvider *)extensionProvider;
-(id)matchingContext;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3 ;
-(id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1 ;
-(void)setDelegate:(id<_MXExtensionManagerDelegate>)arg1 ;
-(void)setMatchingContext:(id)arg1 ;
-(id<_MXExtensionLookupPolicy>)lookupPolicy;
-(void)setExtensionProvider:(_MXExtensionProvider *)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
@end
