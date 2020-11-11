/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKLiveRenderedShaderSet, NSArray, NSString, NSDate, NSDictionary, NSNumber, NSURL, NSSet, PKNFCPayload, PKImage, PKPassDisplayProfile, PKBarcode, PKPassLiveRenderedImageSet, PKPassFrontFaceImageSet, PKPassPersonalization, PKPassBarcodeSettings, PKPaymentPass, PKSecureElementPass, UIImage;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {

	PKLiveRenderedShaderSet* _liveRenderedShaderSet;
	BOOL _remotePass;
	BOOL _isCloudKitArchived;
	BOOL _voided;
	BOOL _hasStoredValue;
	BOOL _liveRenderedBackground;
	BOOL _supportsCategoryVisualization;
	BOOL _revoked;
	NSArray* _embeddedLocations;
	unsigned long long _passType;
	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	NSString* _organizationName;
	NSDate* _relevantDate;
	NSDictionary* _userInfo;
	NSString* _deviceName;
	NSString* _passLibraryMachServiceName;
	NSNumber* _sequenceCounter;
	NSURL* _passURL;
	NSString* _teamID;
	NSDate* _expirationDate;
	NSString* _groupingID;
	NSSet* _embeddedBeacons;
	NSURL* _webLocationsURL;
	NSURL* _localLocationsURL;
	long long _sharingMethod;
	NSURL* _sharingURL;
	NSString* _sharingText;
	NSSet* _associatedPassTypeIdentifiers;
	PKNFCPayload* _nfcPayload;
	PKImage* _partialFrontFaceImagePlaceholder;
	NSString* _provisioningCredentialHash;
	NSString* _cardholderInfoSectionTitle;
	NSDate* _ingestedDate;
	NSDate* _modifiedDate;

}

@property (nonatomic,readonly) BOOL silenceRequested; 
@property (nonatomic,readonly) long long eventType; 
@property (nonatomic,readonly) BOOL hasFlightDetails; 
@property (nonatomic,readonly) NSString * airlineCode; 
@property (nonatomic,readonly) unsigned long long flightNumber; 
@property (nonatomic,readonly) NSString * flightCode; 
@property (nonatomic,copy) NSString * passLibraryMachServiceName;                              //@synthesize passLibraryMachServiceName=_passLibraryMachServiceName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,getter=isRemotePass,nonatomic) BOOL remotePass;                              //@synthesize remotePass=_remotePass - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                                      //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceCounter;                                         //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                        //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                                              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                    //@synthesize passURL=_passURL - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitArchived;                                          //@synthesize isCloudKitArchived=_isCloudKitArchived - In the implementation block
@property (assign,nonatomic) unsigned long long passType;                                      //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isVoided,nonatomic) BOOL voided;                                      //@synthesize voided=_voided - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                                              //@synthesize groupingID=_groupingID - In the implementation block
@property (nonatomic,copy) NSSet * embeddedLocations; 
@property (nonatomic,copy) NSArray * embeddedLocationsArray;                                   //@synthesize embeddedLocations=_embeddedLocations - In the implementation block
@property (nonatomic,copy) NSSet * embeddedBeacons;                                            //@synthesize embeddedBeacons=_embeddedBeacons - In the implementation block
@property (nonatomic,copy) NSURL * webLocationsURL;                                            //@synthesize webLocationsURL=_webLocationsURL - In the implementation block
@property (nonatomic,copy) NSURL * localLocationsURL;                                          //@synthesize localLocationsURL=_localLocationsURL - In the implementation block
@property (nonatomic,copy) PKPassDisplayProfile * displayProfile; 
@property (nonatomic,copy) NSURL * webServiceURL; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) NSString * pluralLocalizedName; 
@property (nonatomic,readonly) NSString * lowercaseLocalizedName; 
@property (assign,nonatomic) long long sharingMethod;                                          //@synthesize sharingMethod=_sharingMethod - In the implementation block
@property (nonatomic,copy) NSURL * sharingURL;                                                 //@synthesize sharingURL=_sharingURL - In the implementation block
@property (nonatomic,copy) NSString * sharingText;                                             //@synthesize sharingText=_sharingText - In the implementation block
@property (nonatomic,copy) NSSet * associatedPassTypeIdentifiers;                              //@synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers - In the implementation block
@property (setter=setNFCPayload:,nonatomic,copy) PKNFCPayload * nfcPayload;                    //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (readonly) NSString * notificationCenterTitle; 
@property (assign,nonatomic) BOOL hasStoredValue;                                              //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,readonly) PKBarcode * barcode; 
@property (nonatomic,readonly) PKImage * footerImage; 
@property (nonatomic,readonly) NSString * logoText; 
@property (nonatomic,readonly) long long transitType; 
@property (nonatomic,readonly) NSArray * frontFieldBuckets; 
@property (nonatomic,readonly) NSArray * backFieldBuckets; 
@property (nonatomic,readonly) PKImage * iconImage; 
@property (nonatomic,readonly) PKImage * rawIcon; 
@property (nonatomic,readonly) PKImage * notificationIconImage; 
@property (nonatomic,readonly) PKImage * frontFaceImage; 
@property (nonatomic,readonly) PKImage * frontFaceShadowImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImagePlaceholder;                     //@synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder - In the implementation block
@property (nonatomic,readonly) PKImage * cardHolderPicture; 
@property (nonatomic,readonly) PKImage * personalizationLogoImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoDarkImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoLightImage; 
@property (assign,nonatomic) BOOL liveRenderedBackground;                                      //@synthesize liveRenderedBackground=_liveRenderedBackground - In the implementation block
@property (assign,nonatomic) BOOL supportsCategoryVisualization;                               //@synthesize supportsCategoryVisualization=_supportsCategoryVisualization - In the implementation block
@property (nonatomic,readonly) PKLiveRenderedShaderSet * liveRenderedShaderSet; 
@property (nonatomic,readonly) PKPassLiveRenderedImageSet * liveRenderedImageSet; 
@property (nonatomic,copy) NSString * provisioningCredentialHash;                              //@synthesize provisioningCredentialHash=_provisioningCredentialHash - In the implementation block
@property (nonatomic,copy) NSString * cardholderInfoSectionTitle;                              //@synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle - In the implementation block
@property (nonatomic,readonly) PKPassFrontFaceImageSet * frontFaceImageSet; 
@property (nonatomic,readonly) CGRect logoRect; 
@property (nonatomic,readonly) CGRect thumbnailRect; 
@property (nonatomic,readonly) CGRect stripRect; 
@property (nonatomic,readonly) NSArray * storeIdentifiers; 
@property (nonatomic,readonly) NSURL * appLaunchURL; 
@property (nonatomic,readonly) PKPassPersonalization * personalization; 
@property (nonatomic,readonly) BOOL isPersonalizable; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSString * businessChatIdentifier; 
@property (nonatomic,readonly) PKPassBarcodeSettings * barcodeSettings; 
@property (nonatomic,retain) NSDate * ingestedDate;                                            //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                            //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,getter=isRevoked,nonatomic) BOOL revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKSecureElementPass * secureElementPass; 
@property (nonatomic,copy,readonly) UIImage * icon; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
+(Class)classForPassType:(unsigned long long)arg1 ;
+(BOOL)isValidObjectWithFileDataAccessor:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(unsigned long long)defaultSettings;
+(id)recordNamePrefix;
+(Class)classForDictionary:(id)arg1 bundle:(id)arg2 ;
+(Class)resolvingClass;
-(PKImage *)iconImage;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)teamID;
-(BOOL)isExpired;
-(NSString *)provisioningCredentialHash;
-(void)setProvisioningCredentialHash:(NSString *)arg1 ;
-(long long)eventType;
-(NSDictionary *)userInfo;
-(id)diff:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSString *)localizedDescription;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)hasValidNFCPayload;
-(BOOL)hasStoredValue;
-(id)fieldForKey:(id)arg1 ;
-(NSURL *)passURL;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSString *)logoText;
-(void)setPassType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHasStoredValue:(BOOL)arg1 ;
-(BOOL)silenceRequested;
-(id)numberForSemanticKey:(id)arg1 ;
-(id)stringForSemanticKey:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(id)semantics;
-(id)primaryIdentifier;
-(void)setGroupingID:(NSString *)arg1 ;
-(PKBarcode *)barcode;
-(PKImage *)rawIcon;
-(NSString *)organizationName;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(BOOL)isVoided;
-(unsigned long long)itemType;
-(NSSet *)associatedPassTypeIdentifiers;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setNFCPayload:(id)arg1 ;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(void)setAssociatedPassTypeIdentifiers:(NSSet *)arg1 ;
-(void)setLiveRenderedBackground:(BOOL)arg1 ;
-(void)setSupportsCategoryVisualization:(BOOL)arg1 ;
-(CGRect)logoRect;
-(id)thumbnailImage;
-(void)setEmbeddedLocationsArray:(NSArray *)arg1 ;
-(void)setEmbeddedBeacons:(NSSet *)arg1 ;
-(void)setSharingMethod:(long long)arg1 ;
-(long long)sharingMethod;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)setSharingText:(NSString *)arg1 ;
-(NSURL *)appLaunchURL;
-(BOOL)hasLocationRelevancyInfo;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(id)_changeMessageForFieldKey:(id)arg1 ;
-(id)_localizationKeyForMultipleDiff;
-(id)primaryFields;
-(PKPassPersonalization *)personalization;
-(PKImage *)notificationIconImage;
-(CGRect)thumbnailRect;
-(PKImage *)footerImage;
-(PKImage *)cardHolderPicture;
-(id)stripImage;
-(NSString *)notificationCenterTitle;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(PKImage *)compactBankLogoDarkImage;
-(PKImage *)compactBankLogoLightImage;
-(PKPassBarcodeSettings *)barcodeSettings;
-(NSString *)cardholderInfoSectionTitle;
-(long long)transitType;
-(unsigned long long)passType;
-(NSSet *)embeddedBeacons;
-(NSSet *)embeddedLocations;
-(void)setEmbeddedLocations:(NSSet *)arg1 ;
-(NSString *)lowercaseLocalizedName;
-(NSString *)pluralLocalizedName;
-(BOOL)isRelevantDateOld;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasTimeOrLocationRelevancyInfo;
-(BOOL)supportsSharing;
-(id)localizedValueForFieldKey:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(NSURL *)localLocationsURL;
-(BOOL)isPersonalizable;
-(PKImage *)frontFaceShadowImage;
-(PKImage *)partialFrontFaceImage;
-(PKImage *)personalizationLogoImage;
-(PKPassLiveRenderedImageSet *)liveRenderedImageSet;
-(void)setRemotePass:(BOOL)arg1 ;
-(NSDate *)modifiedDate;
-(PKPassFrontFaceImageSet *)frontFaceImageSet;
-(PKLiveRenderedShaderSet *)liveRenderedShaderSet;
-(BOOL)isEqualToPassIncludingMetadata:(id)arg1 ;
-(id)dateForSemanticKey:(id)arg1 ;
-(id)locationForSemanticKey:(id)arg1 ;
-(unsigned long long)flightNumber;
-(id)backgroundImage;
-(id)currencyAmountForSemanticKey:(id)arg1 ;
-(id)personNameComponentsForSemanticKey:(id)arg1 ;
-(id)stringsForSemanticKey:(id)arg1 ;
-(id)dictionariesForSemanticKey:(id)arg1 ;
-(long long)style;
-(void)setPassLibraryMachServiceName:(NSString *)arg1 ;
-(BOOL)isCloudKitArchived;
-(void)setIsCloudKitArchived:(BOOL)arg1 ;
-(NSURL *)webLocationsURL;
-(void)setWebLocationsURL:(NSURL *)arg1 ;
-(NSURL *)sharingURL;
-(BOOL)isRevoked;
-(NSString *)localizedName;
-(void)setLocalLocationsURL:(NSURL *)arg1 ;
-(NSString *)sharingText;
-(PKImage *)partialFrontFaceImagePlaceholder;
-(BOOL)liveRenderedBackground;
-(BOOL)supportsCategoryVisualization;
-(void)setCardholderInfoSectionTitle:(NSString *)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(void)setRevoked:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(PKSecureElementPass *)secureElementPass;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSNumber *)sequenceCounter;
-(PKPaymentPass *)paymentPass;
-(PKNFCPayload *)nfcPayload;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)storeIdentifiers;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(BOOL)isUpdatable;
-(NSString *)groupingID;
-(NSDate *)relevantDate;
-(BOOL)isRemotePass;
-(NSString *)passLibraryMachServiceName;
-(NSDate *)ingestedDate;
-(NSArray *)embeddedLocationsArray;
-(NSDate *)expirationDate;
-(NSString *)flightCode;
-(NSString *)airlineCode;
-(CGRect)stripRect;
-(id)logoImage;
-(id)balanceFields;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setVoided:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFlightDetails;
-(void)loadFlightsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)businessChatIdentifier;
-(BOOL)isValid;
-(id)allSemantics;
-(PKImage *)frontFaceImage;
@end
