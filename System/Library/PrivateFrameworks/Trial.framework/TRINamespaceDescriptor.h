/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, TRIAppContainer;

@interface TRINamespaceDescriptor : NSObject {

	unsigned _namespaceVersion;
	unsigned _namespaceCompatibilityVersion;
	int _cloudKitContainerId;
	NSString* _namespaceName;
	NSURL* _factorsURL;
	TRIAppContainer* _appContainer;
	NSString* _resourceAttributionIdentifier;

}

@property (nonatomic,readonly) NSString * namespaceName;                              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) NSURL * factorsURL;                                    //@synthesize factorsURL=_factorsURL - In the implementation block
@property (nonatomic,readonly) TRIAppContainer * appContainer;                        //@synthesize appContainer=_appContainer - In the implementation block
@property (nonatomic,readonly) unsigned namespaceVersion;                             //@synthesize namespaceVersion=_namespaceVersion - In the implementation block
@property (nonatomic,readonly) unsigned namespaceCompatibilityVersion;                //@synthesize namespaceCompatibilityVersion=_namespaceCompatibilityVersion - In the implementation block
@property (nonatomic,readonly) int cloudKitContainerId;                               //@synthesize cloudKitContainerId=_cloudKitContainerId - In the implementation block
@property (nonatomic,readonly) NSString * resourceAttributionIdentifier;              //@synthesize resourceAttributionIdentifier=_resourceAttributionIdentifier - In the implementation block
+(BOOL)removeDescriptorWithNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
+(id)descriptorPathForNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
+(id)loadFromFile:(id)arg1 ;
+(id)descriptorsForDirectory:(id)arg1 ;
+(id)loadWithNamespaceName:(id)arg1 fromDirectory:(id)arg2 ;
-(unsigned)namespaceVersion;
-(NSString *)resourceAttributionIdentifier;
-(unsigned long long)hash;
-(int)cloudKitContainerId;
-(BOOL)removeFromDirectory:(id)arg1 ;
-(id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 namespaceVersion:(unsigned)arg3 namespaceCompatibilityVersion:(unsigned)arg4 ;
-(BOOL)_isEqualToNamespaceDescriptor:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(unsigned)namespaceCompatibilityVersion;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(id)factorsAbsolutePathAsOwner:(BOOL)arg1 ;
-(NSURL *)factorsURL;
-(id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 appContainer:(id)arg3 namespaceVersion:(unsigned)arg4 namespaceCompatibilityVersion:(unsigned)arg5 cloudKitContainerId:(int)arg6 resourceAttributionIdentifier:(id)arg7 ;
-(BOOL)saveToDirectory:(id)arg1 ;
-(NSString *)namespaceName;
-(TRIAppContainer *)appContainer;
@end

