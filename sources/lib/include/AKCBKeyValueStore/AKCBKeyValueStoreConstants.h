//
//  AKCBKeyValueStoreConstants.h
//  AKCBKeyValueStore
//
//  Created by Alexander Koglin on 12.10.13.
//  Copyright (c) 2013 Alexander Koglin. All rights reserved.
//

#ifndef AKCBKeyValueStore_AKCBKeyValueStoreConstants_h
#define AKCBKeyValueStore_AKCBKeyValueStoreConstants_h

typedef void (^AKHandlerWithoutResult)(NSError *);
typedef void (^AKHandlerWithResult)(id, NSError *);

#define AKCBFORMAT(STRVAL) @"%s: %@", __PRETTY_FUNCTION__, STRVAL
#define AKCBLOG(LOGVAL) NSLog(AKCBFORMAT(LOGVAL))

#endif
