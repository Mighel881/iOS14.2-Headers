/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char*)arg2 ;
-(int)portType;
-(id)initWithService:(id)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andMACAddress:(char*)arg2 ;
@end
