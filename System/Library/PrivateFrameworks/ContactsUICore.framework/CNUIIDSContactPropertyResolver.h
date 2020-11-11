/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject {

	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;

}

@property (nonatomic,readonly) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)descriptorForCopyingStrippedContact:(id)arg1 ;
+(id)IDSRelevantPropertiesForContact:(id)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(/*^block*/id)arg3 ;
@end
